//
//  RatePlayerViewController.m
//  Ratings
//
//  Created by Larry Lai on 1/7/16.
//  Copyright © 2016 Super Fun. All rights reserved.
//

#import "RatePlayerViewController.h"
#import "Player.h"

@interface RatePlayerViewController ()

@end

@implementation RatePlayerViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.title = self.player.name;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)rateAction:(UIButton *)sender {
    self.player.rating = sender.tag;
    [self.delegate ratePlayerViewController:self didPickRatingForPlayer:self.player];
}

@end
