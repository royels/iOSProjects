//
//  AddViewController.h
//  PracticeChecklist
//
//  Created by Rohan Yelsangikar on 12/31/14.
//  Copyright (c) 2014 Royels. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"



@protocol AddTaskViewControllerDelegate <NSObject>

-(void)didCancel;
-(void)didAddTask:(Task *) task;


@end


@interface AddViewController : UIViewController <UITextViewDelegate, UITextFieldDelegate>


@property (weak, nonatomic) id <AddTaskViewControllerDelegate> delegate;



@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutlet UITextView *textView;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;
- (IBAction)addTaskButtonPressed:(UIButton *)sender;
- (IBAction)cancelButtonPressed:(UIButton *)sender;

@end
