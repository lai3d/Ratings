//
//  ViewController.m
//  Ratings
//
//  Created by Larry Lai on 27/6/16.
//  Copyright © 2016 Super Fun. All rights reserved.
//

#import "GesturesViewController.h"
#import "RankingViewController.h"
#import "Player.h"

@interface GesturesViewController ()

@end

@implementation GesturesViewController


- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    if([segue.identifier isEqualToString:@"BestPlayers"]) {
        UINavigationController *navigationController = segue.destinationViewController;
        RankingViewController *rankingViewController = [navigationController viewControllers][0];
        rankingViewController.rankedPlayers = [self playersWithRating:5];
        rankingViewController.title = @"Best Players";
    } else if([segue.identifier isEqualToString:@"WorstPlayers"]) {
        UINavigationController *navigationController = segue.destinationViewController;
        RankingViewController *rankingViewController = [navigationController viewControllers][0];
        rankingViewController.rankedPlayers = [self playersWithRating:1];
        rankingViewController.title = @"Worst Players";
    }
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (NSMutableArray *)playersWithRating:(int)rating {
    NSMutableArray *rankedPlayers = [NSMutableArray arrayWithCapacity:[self.players count]];
    
    for(Player *player in self.players) {
        if(player.rating == rating) {
            [rankedPlayers addObject:player];
        }
    }
    
    return rankedPlayers;
}

@end
