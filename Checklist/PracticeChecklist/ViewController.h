//
//  ViewController.h
//  PracticeChecklist
//
//  Created by Rohan Yelsangikar on 12/31/14.
//  Copyright (c) 2014 Royels. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AddViewController.h"
#import "TaskDetailViewController.h"
@interface ViewController : UIViewController <AddTaskViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, DetailTaskViewControllerDelegate>


@property (strong, nonatomic) NSMutableArray *taskObjects;


@property (strong, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)reorderBarButtonPressed:(UIBarButtonItem *)sender;

- (IBAction)addTaskBarButtonPressed:(UIBarButtonItem *)sender;

# pragma mark - View Controller Delegate




@end

