//
//  BellTrigger.h
//  iTerm
//
//  Created by George Nachman on 9/23/11.
//

#import <Cocoa/Cocoa.h>
#import "Trigger.h"

@interface BellTrigger : Trigger {

}

+ (NSString *)title;
- (BOOL)takesParameter;

@end
