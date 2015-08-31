//
//  HTTPRequest.h
//  MovinCore
//
//  Created by Movin Software on 18/03/15.
//  Copyright (c) 2015 Movin Software. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HTTPRequest : NSObject

// Initialization
-(id) initWithUrl:(NSString *) url;
-(id) initWithUrl:(NSString *) url andJSONPostData:(NSString *) json;

// Settings
-(void) setMimeType:(NSString *) mimeType;

// Execute
-(void) executeWithCallback:(void(^)(BOOL success, NSString* response)) callback;
-(NSString *) executeWithError:(NSError**) error;

@end
