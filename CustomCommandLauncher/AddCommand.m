//
//  AddCommand.m
//  CustomCommandLauncher
//
//  Created by Matthew Clements on 12/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "AddCommand.h"

@interface AddCommand ()

@end

@implementation AddCommand

@synthesize name, command, dialog, sudo;

- (id)initWithWindow:(NSWindow *)window
{    
    self = [super initWithWindow:window];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}

- (void)windowDidLoad
{
    [super windowDidLoad];
    // Implement this method to handle any initialization after your window controller's window has been loaded from its nib file.
    
    [name setStringValue:@""];
    [command setStringValue:@""];
    [dialog setState:0];
    [sudo setState:0];
}


-(void)closeWindow:(id)sender {
    
    [name setStringValue:@""];
    [command setStringValue:@""];
    [dialog setState:0];
    [sudo setState:0];
    
    [self close];
}

-(void)saveCommand:(id)sender {
    
    //Save using Core Data
    
    if(1==2)
    {
        //Saved OK
        [name setStringValue:@""];
        [command setStringValue:@""];
        [dialog setState:0];
        [sudo setState:0];
        
        [self close];
    }
}

@end
