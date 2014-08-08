//
//  ViewController.h
//  PicPad
//
//  Created by Matthew Ao on 1/6/14.
//  Copyright (c) 2014 Matthew Ao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate> {
    UIImagePickerController *picker;
    UIImagePickerController *picker2;
    UIImage *image;
    IBOutlet UIImageView *imageview;
}
- (IBAction)showActionSheet:(id)sender; //Declare method to show action sheet
- (IBAction)TakePhoto;
- (IBAction)ChooseExisting;
@end
