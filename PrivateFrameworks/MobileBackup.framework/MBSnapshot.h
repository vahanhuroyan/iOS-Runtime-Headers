/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSDate, NSString;

@interface MBSnapshot : NSObject <NSCopying, NSCoding> {
    unsigned int _snapshotID;
    NSString *_deviceName;
    NSDate *_date;
    int _state;
    BOOL _isCompatible;
    NSString *_systemVersion;
}

@property(readonly) unsigned int snapshotID;
@property(readonly) NSString * deviceName;
@property(readonly) NSDate * date;
@property(readonly) int state;
@property(readonly) BOOL isCompatible;
@property(readonly) NSString * systemVersion;


- (int)state;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)systemVersion;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)deviceName;
- (BOOL)isCompatible;
- (unsigned int)snapshotID;
- (id)initWithSnapshotID:(unsigned int)arg1 deviceName:(id)arg2 date:(id)arg3 state:(int)arg4 isCompatible:(BOOL)arg5 systemVersion:(id)arg6;

@end
