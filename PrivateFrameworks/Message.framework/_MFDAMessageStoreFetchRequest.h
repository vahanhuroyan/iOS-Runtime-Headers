/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory>, MimePart, Message, MFDAMessageStore;

@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {
    <MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory> *consumer;
    MFDAMessageStore *store;
    Message *message;
    MimePart *part;
    int format;
    BOOL partial;
}

@property(readonly) BOOL shouldSend;
@property(readonly) BOOL isUserRequested;


- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)shouldSend;
- (id)deferredOperation;
- (BOOL)isUserRequested;
- (unsigned long long)generationNumber;

@end
