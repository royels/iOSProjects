//
//  TaskDetailViewController.m
//  PracticeChecklist
//
//  Created by Rohan Yelsangikar on 12/31/14.
//  Copyright (c) 2014 Royels. All rights reserved.
//

#import "TaskDetailViewController.h" 

@interface TaskDetailViewController () 

@end

@implementation TaskDetailViewController

- (void)viewDidLoad { 
    [super viewDidLoad];
    
    self.taskLabel.text = self.task.title; 
    self.taskDetailLabel.text = self.task.described; 
    
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init]; 
    [formatter setDateFormat:@"yyyy-MM-dd"]; 
    NSString *stringFromDate = [formatter stringFromDate:self.task.date];
    self.dateLabel.text = stringFromDate;
}


-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender //
{
    if ([segue.destinationViewController isKindOfClass:[EditTaskViewController class]]) 
    {
        EditTaskViewController *editTaskViewController = segue.destinationViewController; 
        editTaskViewController.task = self.task;
        editTaskViewController.delegate = self;
    }
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)editBarButtonItemPressed:(UIBarButtonItem *)sender
{
    [self performSegueWithIdentifier:@"toEditTaskViewControllerSegue" sender:nil];
}

-(void)didUpdateTask
{
    self.taskLabel.text = self.task.title;
    self.taskDetailLabel.text = self.task.described;
    
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    NSString *stringFromDate = [formatter stringFromDate:self.task.date];
    self.dateLabel.text = stringFromDate;
    
    [self.navigationController popViewControllerAnimated:YES];
    [self.delegate updateTask];
}


@end
