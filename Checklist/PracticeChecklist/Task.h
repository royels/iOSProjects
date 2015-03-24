//
//  Task.h
//  PracticeChecklist
//
//  Created by Rohan Yelsangikar on 1/8/15.
//  Copyright (c) 2015 Royels. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Task : NSObject

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *described;
@property (strong, nonatomic) NSDate *date;
@property (nonatomic) BOOL isCompleted;

-(id)initWithData: (NSDictionary *)data;








@end
