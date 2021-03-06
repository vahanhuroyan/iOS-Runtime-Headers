/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSMutableArray;

@interface ML3EntityReplacer : NSObject  {
    struct __CFDictionary { } *_propertyToIndexPair;
    NSMutableArray *_statements;
}

@property(getter=isOpen,readonly) BOOL open;


- (BOOL)perform;
- (void).cxx_destruct;
- (void)dealloc;
- (void)bindPersistentID:(long long)arg1;
- (void)bindDouble:(double)arg1 forProperty:(id)arg2;
- (void)bindInt:(int)arg1 forProperty:(id)arg2;
- (void)bindNullForProperty:(id)arg1;
- (void)statementForProperty:(id)arg1 usingBlock:(id)arg2;
- (id)initWithEntityClass:(Class)arg1 properties:(id)arg2 databaseConnection:(id)arg3;
- (void)clearBindings;
- (void)close;
- (BOOL)isOpen;

@end
