//
//  TaskDetailViewController.h
//  PracticeChecklist
//
//  Created by Rohan Yelsangikar on 12/31/14.
//  Copyright (c) 2014 Royels. All rights reserved.
//

#import <UIKit/UIKit.h> 
#import "Checkers.h" 
#import "Task.h"     
#import "EditTaskViewController.h" 

@protocol DetailTaskViewControllerDelegate <NSObject> 
                                                      
-(void)updateTask; 

@end


@interface TaskDetailViewController : UIViewController<EditTaskViewControllerDelegate> 
- (IBAction)editBarButtonItemPressed:(UIBarButtonItem *)sender; 
@property (strong, nonatomic) IBOutlet UILabel *taskLabel; 
@property (weak, nonatomic) id <DetailTaskViewControllerDelegate> delegate;
@property (strong, nonatomic) IBOutlet UILabel *dateLabel; 
@property (strong, nonatomic)Task *task; 
@property (strong, nonatomic) IBOutlet UILabel *taskDetailLabel; 

@end
