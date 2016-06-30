//
//  GamePickerViewController.h
//  Ratings
//
//  Created by Larry Lai on 30/6/16.
//  Copyright © 2016 Super Fun. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GamePickerViewController;

@protocol GamePickerViewControllerDelegate <NSObject>

- (void)gamePickerViewController:(GamePickerViewController *)controller
                   didSelectGame:(NSString *)game;

@end

@interface GamePickerViewController : UITableViewController

@property (nonatomic, weak) id <GamePickerViewControllerDelegate> delegate;
@property (nonatomic, strong) NSString *game;

@end
