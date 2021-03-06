/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSString;

@interface MFLock : NSLock <MFLockObject> {
    NSString *_name;
    id _delegate;
}

+ (void)initialize;

- (id)description;
- (void)dealloc;
- (id)init;
- (BOOL)isLockedByMe;
- (BOOL)tryLock;
- (void)unlock;
- (void)lock;
- (id)initWithName:(id)arg1 andDelegate:(id)arg2;
- (BOOL)lockBeforeDate:(id)arg1;

@end
