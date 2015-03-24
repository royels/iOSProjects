//
//  Task.m
//  PracticeChecklist
//
//  Created by Rohan Yelsangikar on 1/8/15.
//  Copyright (c) 2015 Royels. All rights reserved.
//

#import "Task.h"
#import "Checkers.h"


@implementation Task

-(id)initWithData:(NSDictionary *)data
{
    self = [super init];
    
    if(self)
    {
        self.title = data[TASK_TITLE];
        self.described = data[TASK_DESCRIPTION];
        self.date = data[TASK_DATE];
        self.isCompleted = data[TASK_COMPLETED];
    }
    return self;
}

-(id) init
{
    self = [self initWithData:nil];
    return self;
}






@end
