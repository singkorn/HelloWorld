//
//  ViewController.h
//  HelloWorld
//
//  Created by Singkorn Junko Dhepyasuvan on 10/28/12.
//  Copyright (c) 2012 Debaya. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *textField;
- (IBAction)changeGreeting:(id)sender;

@end
