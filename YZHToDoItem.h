//
//  YZHToDoItem.h
//  ToDoList
//
//  Created by Will on 21/05/14.
//  Copyright (c) 2014 Whitebag. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YZHToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
