/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIStatusBarItem : NSObject  {
    int _type;
}

@property(readonly) int type;
@property(readonly) Class viewClass;
@property(readonly) int priority;
@property(readonly) int leftOrder;
@property(readonly) int rightOrder;
@property(readonly) NSString * indicatorName;

+ (BOOL)itemType:(int)arg1 appearsInRegion:(int)arg2;
+ (BOOL)itemType:(int)arg1 canBeEnabledForData:(id)arg2 style:(int)arg3;
+ (BOOL)typeIsValid:(int)arg1;
+ (id)itemWithType:(int)arg1;

- (int)type;
- (id)description;
- (int)compareRightOrder:(id)arg1;
- (int)compareLeftOrder:(id)arg1;
- (Class)viewClass;
- (int)rightOrder;
- (int)leftOrder;
- (id)indicatorName;
- (int)priority;
- (int)comparePriority:(id)arg1;
- (BOOL)appearsInRegion:(int)arg1;
- (BOOL)appearsOnRight;
- (BOOL)appearsOnLeft;
- (id)initWithType:(int)arg1;

@end
