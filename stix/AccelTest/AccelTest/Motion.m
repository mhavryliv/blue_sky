//
//  Motion.m
//  AccelTest
//
//  Created by Mark Havryliv on 1/10/20.
//  Copyright © 2020 Mark Havryliv. All rights reserved.
//

#import "Motion.h"
#import <CoreMotion/CoreMotion.h>

@implementation Motion
{
    CMMotionManager* _motionManager;
}

-(id) init {
    self = [super init];
    if (self) {
        _motionManager = [CMMotionManager new];
//        [NSTimer scheduledTimerWithTimeInterval:0.5 target:self selector:@selector(timercb) userInfo:nil repeats:YES];
    }
    return self;
}

- (void)test {
    NSLog(@"Hello");
}


-(void)timercb:(NSTimer *)timer {
    NSLog(@"Timer callback");
}

@end
