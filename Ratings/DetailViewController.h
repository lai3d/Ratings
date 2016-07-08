//
//  DetailViewController.h
//  Ratings
//
//  Created by Larry Lai on 8/7/16.
//  Copyright © 2016 Super Fun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController<UISplitViewControllerDelegate, UIToolbarDelegate, UIPopoverControllerDelegate>

@property (nonatomic, weak) IBOutlet UIToolbar *toolbar;

@end
