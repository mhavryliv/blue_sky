//
//  ViewController.m
//  AccelTest
//
//  Created by Mark Havryliv on 1/10/20.
//  Copyright © 2020 Mark Havryliv. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.motion = [[Motion alloc] init];
    [self.motion test];
    
}


@end
