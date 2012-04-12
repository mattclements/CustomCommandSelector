//
//  AddCommand.h
//  CustomCommandLauncher
//
//  Created by Matthew Clements on 12/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AddCommand : NSWindowController {
    IBOutlet NSTextField *name;
    IBOutlet NSTextField *command;
    IBOutlet NSButton *dialog;
    IBOutlet NSButton *sudo;
}

-(IBAction)closeWindow:(id)sender;
-(IBAction)saveCommand:(id)sender;

@property (nonatomic, retain) IBOutlet NSTextField *name;
@property (nonatomic, retain) IBOutlet NSTextField *command;
@property (nonatomic, retain) IBOutlet NSButton *dialog;
@property (nonatomic, retain) IBOutlet NSButton *sudo;

@end
