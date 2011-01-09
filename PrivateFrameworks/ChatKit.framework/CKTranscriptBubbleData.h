/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray, NSDate;



@interface CKTranscriptBubbleData : NSObject 
{
    NSMutableArray *_bubbleDataArray;
    float _balloonWidth;
    NSDate *_nextEligibleTimestamp;
}

@property float balloonWidth; /* unknown property attribute: V_balloonWidth */

+ (Class)balloonClassForMessagePart:(id)arg1;
+ (Class)balloonClassForFlags:(unsigned long)arg1;
+ (Class)balloonClassForMessage:(id)arg1;
+ (unsigned long)_processFlags:(unsigned long)arg1 forText:(id)arg2;

- (void)dealloc;
- (NSInteger)count;
- (id)data:(NSInteger)arg1 forIndex:(NSInteger)arg2;
- (id)bubbleDataForIndex:(NSInteger)arg1;
- (BOOL)bubbleData:(id)arg1 isEqualToIndex:(NSInteger)arg2;
- (id)deleteMessageAtIndex:(NSInteger)arg1;
- (void)appendBubbleDataForMessage:(id)arg1;
- (void)clearBubbleData;
- (void)_createArrayIfNeeded;
- (void)_createBubbleInfoForImage:(id)arg1 part:(id)arg2 subject:(id)arg3;
- (void)_appendTextMessage:(id)arg1 part:(id)arg2 height:(NSInteger)arg3 text:(id)arg4 subject:(id)arg5 bubbleClass:(Class)arg6 messageContinuation:(BOOL)arg7;
- (void)_createSegmentArrayForMessageText:(id)arg1 height:(NSUInteger*)arg2 message:(id)arg3 subject:(id)arg4 part:(id)arg5 messageContinuation:(BOOL)arg6;
- (void)_createBubbleInfoForTextMessage:(id)arg1 part:(id)arg2 subject:(id)arg3;
- (void)_appendDateForMessageIfNeeded:(id)arg1;
- (void)_appendEntity:(id)arg1;
- (void)_appendDate:(id)arg1;
- (void)_appendEntityForMessageIfNeeded:(id)arg1;
- (void)_setupNextEligibleTimestamp:(id)arg1;
- (BOOL)_shouldShowTimestampForDate:(id)arg1;
- (float)balloonWidth;
- (void)setBalloonWidth:(float)arg1;
- (NSInteger)typeAtIndex:(NSInteger)arg1;
- (id)entityAtIndex:(NSInteger)arg1;
- (id)messageAtIndex:(NSInteger)arg1;
- (id)dateAtIndex:(NSInteger)arg1;
- (id)partAtIndex:(NSInteger)arg1;
- (id)textAtIndex:(NSInteger)arg1;
- (id)subjectAtIndex:(NSInteger)arg1;
- (NSInteger)heightAtIndex:(NSInteger)arg1;
- (Class)balloonClassAtIndex:(NSInteger)arg1;
- (BOOL)isSubjectPlaceholderAtIndex:(NSInteger)arg1;
- (BOOL)isMessageContinuationAtIndex:(NSInteger)arg1;

@end