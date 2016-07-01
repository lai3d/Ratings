//
//  PlayerDetailsViewController.h
//  Ratings
//
//  Created by Larry Lai on 28/6/16.
//  Copyright © 2016 Super Fun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Player.h"
#import "GamePickerViewController.h"

@class PlayerDetailsViewController;

@protocol PlayerDetailsViewControllerDelegate <NSObject>

- (void)playerDetailsViewControllerDidCancel:(PlayerDetailsViewController *)controller;
- (void)playerDetailsViewController:(PlayerDetailsViewController *)controller
                       didAddPlayer:(Player *)player;
- (void)playerDetailsViewController:(PlayerDetailsViewController *)controller
                      didEditPlayer:(Player *)player;
@end

@interface PlayerDetailsViewController : UITableViewController <GamePickerViewControllerDelegate>

@property (nonatomic, weak) id <PlayerDetailsViewControllerDelegate> delegate;
@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UILabel *detailLabel;
@property (strong, nonatomic) Player *playerToEdit;

- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;

@end
