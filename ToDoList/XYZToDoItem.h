//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by ovidiu on 24/12/13.
//  Copyright (c) 2013 ovidiu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
