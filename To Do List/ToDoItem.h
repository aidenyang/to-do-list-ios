//
//  ToDoItem.h
//  To Do List
//
//  Created by Aiden Yang on 7/27/14.
//  Copyright (c) 2014 aiden-yang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject
@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
