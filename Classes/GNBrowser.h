//
//  GNBrowser.h
//  Gmail Notifr
//
//  Created by James Chen on 1/23/13.
//  Copyright (c) 2013 ashchan.com. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const DefaultBrowserIdentifier;

@interface GNBrowser : NSObject

+ (NSArray *)all;
+ (BOOL)isDefault:(NSString *)identifier;
+ (NSString *)getNameByIdentifier:(NSString *)identifier;
+ (NSString *)getIdentifierByName:(NSString *)name;

@end