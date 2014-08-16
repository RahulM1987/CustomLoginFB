//
//  CustomLogin.h
//  CustomLoginFB
//
//  Created by Rahul on 07/08/14.
//  Copyright (c) 2014 Test. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>

@interface CustomLogin : UIViewController <FBLoginViewDelegate>

@property (strong, nonatomic) IBOutlet UIButton *login;
@property (weak, nonatomic) IBOutlet FBLoginView *loginView;
@property (strong, nonatomic) IBOutlet FBProfilePictureView *profilePictureView;


@property (strong, nonatomic) IBOutlet UILabel *username;

@end
