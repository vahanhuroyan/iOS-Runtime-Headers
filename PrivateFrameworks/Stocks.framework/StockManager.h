/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSMutableArray, NSUbiquitousKeyValueStore;

@interface StockManager : NSObject  {
    NSMutableArray *_defaultListStockSymbols;
    BOOL _shouldPostSyncNotifications;
    NSMutableArray *_stocksList;
    NSMutableArray *_chartDataLRUCache;
    double _lastModifiedTime;
    BOOL _needRemoteAddNotification;
    BOOL _needRemoteMoveNotification;
    NSUbiquitousKeyValueStore *_syncedKVStore;
}

+ (id)sharedManager;
+ (void)clearSharedManager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)_checkForMovedStocks;
- (void)_checkForAddedStocks;
- (BOOL)anyMarketOpen;
- (BOOL)anyMarketOpenWithRealtimePrice;
- (BOOL)anyPriceIsRealtime;
- (void)clearCachedChartDataImageSets;
- (void)moveStockFromIndex:(int)arg1 toIndex:(int)arg2;
- (void)removeStock:(id)arg1;
- (void)addStock:(id)arg1;
- (id)stockForURL:(id)arg1;
- (void)_saveDataChangesWithDictionaries:(id)arg1;
- (void)DeleteChartData:(id)arg1;
- (id)makeSyncableStockListFromList:(id)arg1;
- (id)_localeStocks;
- (void)clearCachedChartData;
- (void)saveListChanges;
- (BOOL)setLocalStockListFromSyncableStockList:(id)arg1;
- (id)_defaultStockDictionaries;
- (void)handleSyncedDataChanged:(id)arg1;
- (id)stockWithSymbol:(id)arg1;
- (void)reloadStocksFromDefaults;
- (void)RemoveChartDataFromLRU:(id)arg1;
- (void)UpdateChartDataInLRU:(id)arg1;
- (void)saveDataChanges;
- (id)stocksList;

@end
