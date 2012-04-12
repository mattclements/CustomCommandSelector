//
//  AppDelegate.h
//  CustomCommandLauncher
//
//  Created by Matt Clements on 12/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "AddCommand.h"
#import "EditCommand.h"

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    IBOutlet NSMenu *statusMenu;
    NSStatusItem * statusItem;
}

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@property (retain) EditCommand *editCommand;
@property (retain) AddCommand *addCommand;

- (IBAction)saveAction:(id)sender;

- (IBAction)openBugs:(id)sender;
- (IBAction)openDocumentation:(id)sender;


- (IBAction)addCommand:(id)sender;
- (IBAction)editCommand:(id)sender;

@end
