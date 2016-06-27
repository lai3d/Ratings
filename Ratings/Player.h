//
//  Player.h
//  Ratings
//
//  Created by Larry Lai on 27/6/16.
//  Copyright © 2016 Super Fun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
