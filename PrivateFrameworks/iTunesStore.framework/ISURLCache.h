/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISURLCacheConfiguration, NSString, NSURLCache;

@interface ISURLCache : NSObject  {
    NSURLCache *_cache;
    ISURLCacheConfiguration *_configuration;
}

@property(readonly) NSString * persistentIdentifier;
@property(readonly) unsigned int currentDiskUsage;
@property(readonly) unsigned int currentMemoryUsage;
@property(readonly) unsigned int diskCapacity;
@property(readonly) unsigned int memoryCapacity;

+ (id)cacheDirectoryPath;

- (void)dealloc;
- (id)init;
- (unsigned int)currentMemoryUsage;
- (unsigned int)memoryCapacity;
- (void)saveMemoryCacheToDisk;
- (void)purgeMemoryCache;
- (void)reloadWithCacheConfiguration:(id)arg1;
- (id)initWithCacheConfiguration:(id)arg1;
- (id)persistentIdentifier;
- (void)removeAllCachedResponses;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;
- (unsigned int)currentDiskUsage;
- (unsigned int)diskCapacity;

@end
