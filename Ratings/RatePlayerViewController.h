//
//  RatePlayerViewController.h
//  Ratings
//
//  Created by Larry Lai on 1/7/16.
//  Copyright © 2016 Super Fun. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RatePlayerViewController;
@class Player;

@protocol RatePlayerViewControllerDelegate <NSObject>

- (void)ratePlayerViewController:(RatePlayerViewController *)controller
          didPickRatingForPlayer:(Player *)player;

@end

@interface RatePlayerViewController : UIViewController

@property (nonatomic, weak)id <RatePlayerViewControllerDelegate> delegate;
@property (nonatomic, strong) Player *player;

- (IBAction)rateAction:(UIButton *)sender;

@end
