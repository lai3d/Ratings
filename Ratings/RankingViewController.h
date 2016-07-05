//
//  RankingViewController.h
//  Ratings
//
//  Created by Larry Lai on 1/7/16.
//  Copyright © 2016 Super Fun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RatePlayerViewController.h"

@interface RankingViewController : UITableViewController<RatePlayerViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *rankedPlayers;
@property (nonatomic, assign) int requiredRating;

- (IBAction)done:(id)sender;

@end
