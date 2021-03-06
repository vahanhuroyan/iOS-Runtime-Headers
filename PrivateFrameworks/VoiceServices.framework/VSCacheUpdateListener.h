/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class NSTimer, NSDictionary, NSMutableArray, NSLock;

@interface VSCacheUpdateListener : NSObject  {
    NSLock *_lock;
    NSMutableArray *_updateRequestQueue;
    NSDictionary *_dataProviders;
    NSTimer *_flushTimer;
    BOOL _isListening;
}

+ (id)sharedListenerIfExists;
+ (id)sharedListener;

- (void)_flush;
- (void)dealloc;
- (id)init;
- (void)performUpdateForModelIdentifier:(id)arg1 classIdentifier:(id)arg2;
- (void)_spokenLanguageChanged:(id)arg1;
- (void)_enqueueRequest:(id)arg1;
- (void)stopListening;
- (void)startListening;
- (id)_initShared;

@end
