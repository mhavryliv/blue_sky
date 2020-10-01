//
//  Motion.h
//  AccelTest
//
//  Created by Mark Havryliv on 1/10/20.
//  Copyright © 2020 Mark Havryliv. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Motion : NSObject

-(void)timercb:(NSTimer *)timer;
- (void)test;

@end

NS_ASSUME_NONNULL_END
