//
//  PlayerCell.m
//  Ratings
//
//  Created by Larry Lai on 28/6/16.
//  Copyright © 2016 Super Fun. All rights reserved.
//

#import "PlayerCell.h"

@implementation PlayerCell

@synthesize nameLabel;
@synthesize gameLabel;
@synthesize ratingImageView;

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
