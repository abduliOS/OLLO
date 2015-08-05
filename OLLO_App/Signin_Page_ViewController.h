//
//  Signin_Page_ViewController.h
//  OLLO_App
//
//  Created by Bala Kumaran on 04/08/15.
//  Copyright (c) 2015 Bala Kumaran. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GooglePlus/GooglePlus.h>
@class GPPSignInButton;
@interface Signin_Page_ViewController : UIViewController <GPPSignInDelegate>
{
    
    IBOutlet UIButton *signOut_button_G;
    IBOutlet UIImageView *signout_image;
    IBOutlet UIImageView *signin_image;
    IBOutlet UIView *subView_Login;
    
    IBOutlet UIView *FBLOGIN;
   
    IBOutlet UIButton *signinButtonMain;
    IBOutlet GPPSignInButton *gSingin;
}
- (IBAction)SignOut_Google:(id)sender;
- (IBAction)signin_button:(id)sender;
@property (weak, nonatomic) IBOutlet GPPSignInButton *signInButton;
@end