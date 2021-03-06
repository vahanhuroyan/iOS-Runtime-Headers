/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString;

@interface MCCalDAVAccountPayload : MCPayload  {
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_principalURL;
    BOOL _useSSL;
    int _port;
    NSString *_accountPersistentUUID;
}

@property(readonly) NSString * accountDescription;
@property(readonly) NSString * hostname;
@property(copy) NSString * username;
@property(copy) NSString * password;
@property(readonly) NSString * principalURL;
@property(readonly) BOOL useSSL;
@property(readonly) int port;
@property(copy) NSString * accountPersistentUUID;

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;

- (void)setPassword:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)description;
- (void).cxx_destruct;
- (id)principalURL;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (int)port;
- (id)password;
- (id)title;
- (id)hostname;
- (id)accountDescription;
- (id)accountPersistentUUID;
- (BOOL)useSSL;

@end
