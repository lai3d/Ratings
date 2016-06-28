//
//  PlayersViewController.h
//  Ratings
//
//  Created by Larry Lai on 27/6/16.
//  Copyright © 2016 Super Fun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewController : UITableViewController<PlayerDetailsViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *players;

@end
