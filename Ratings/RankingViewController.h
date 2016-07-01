//
//  RankingViewController.h
//  Ratings
//
//  Created by Larry Lai on 1/7/16.
//  Copyright © 2016 Super Fun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RankingViewController : UITableViewController

@property (nonatomic, strong)NSMutableArray *rankedPlayers;

- (IBAction)done:(id)sender;

@end
