//
//  UITextSwitch.h
//  TextSwitch
//
//  Created by Vasily Popov on 8/10/17.
//  Copyright © 2017 Vasily Popov. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE@interface UITextSwitch : UIControl

@property (nonatomic) IBInspectable BOOL isOn;
@property (nonatomic, strong) IBInspectable NSString *offText;
@property (nonatomic, strong) IBInspectable NSString *onText;
@property (nonatomic, strong) IBInspectable UIColor *offColor;
@property (nonatomic, strong) IBInspectable UIColor *onColor;
@property (nonatomic, strong) IBInspectable UIColor *borderColor;
@property (nonatomic, strong) IBInspectable UIColor *backgroundColor;
@property (nonatomic) IBInspectable NSInteger borderWidth;

@end
