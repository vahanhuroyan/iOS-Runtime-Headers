/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@class NSArray, NSString, NSPredicate;

@interface ASAssetQuery : NSObject  {
    BOOL _queriesLocalAssetInformationOnly;
    NSString *_assetType;
    NSPredicate *_predicate;
    NSArray *_results;
}

@property(retain) NSPredicate * predicate;
@property BOOL queriesLocalAssetInformationOnly;
@property(retain) NSArray * results;
@property(copy) NSString * assetType;

+ (id)queryPredicateForProperties:(id)arg1;

- (void)setAssetType:(id)arg1;
- (BOOL)queriesLocalAssetInformationOnly;
- (id)results;
- (void)setResults:(id)arg1;
- (id)runQueryAndReturnError:(id*)arg1;
- (void)setQueriesLocalAssetInformationOnly:(BOOL)arg1;
- (id)initWithAssetType:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)dealloc;
- (id)predicate;
- (void)startQuery:(id)arg1;
- (id)assetType;
- (void)stopQuery;

@end
