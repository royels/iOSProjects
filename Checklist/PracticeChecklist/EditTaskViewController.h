//
//  EditTaskViewController.h
//  PracticeChecklist
//
//  Created by Rohan Yelsangikar on 12/31/14.
//  Copyright (c) 2014 Royels. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"

@protocol EditTaskViewControllerDelegate <NSObject>

-(void)didUpdateTask;

@end

@interface EditTaskViewController : UIViewController <UITextFieldDelegate, UITextViewDelegate>
@property (strong, nonatomic) Task *task;
@property (weak, nonatomic) id <EditTaskViewControllerDelegate> delegate;
@property (strong, nonatomic) IBOutlet UITextField *editTextField;
@property (strong, nonatomic) IBOutlet UITextView *editTextView;
@property (strong, nonatomic) IBOutlet UIDatePicker *editDatePicker;
- (IBAction)saveBarButtonPressed:(UIBarButtonItem *)sender;

@end
