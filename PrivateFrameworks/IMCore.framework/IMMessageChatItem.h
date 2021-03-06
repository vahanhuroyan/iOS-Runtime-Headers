/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMMessage;

@interface IMMessageChatItem : IMChatItem  {
}

@property(readonly) IMMessage * message;


- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)message;
- (void)_setMessage:(id)arg1;
- (int)_compareToChatItem:(id)arg1;
- (int)_reverseCompareToChatItem:(id)arg1;
- (id)initWithMessage:(id)arg1;

@end
