/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityDescription, NSPredicate, NSArray;

@interface NSFetchRequest : NSPersistentStoreRequest <NSCoding> {
    NSArray *_groupByProperties;
    NSPredicate *_havingPredicate;
    unsigned int _offset;
    NSArray *_valuesToFetch;
    NSEntityDescription *_entity;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned int _batchSize;
    unsigned long _fetchLimit;
    NSArray *_relationshipKeyPathsForPrefetching;
    struct _fetchRequestFlags { 
        unsigned int distinctValuesOnly : 1; 
        unsigned int includesSubentities : 1; 
        unsigned int includesPropertyValues : 1; 
        unsigned int resultType : 3; 
        unsigned int returnsObjectsAsFaults : 1; 
        unsigned int excludePendingChanges : 1; 
        unsigned int isInUse : 1; 
        unsigned int entityIsName : 1; 
        unsigned int refreshesRefetched : 1; 
        unsigned int propertiesValidated : 1; 
        unsigned int _RESERVED : 20; 
    } _flags;
}

+ (id)fetchRequestWithEntityName:(id)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;

- (id)entity;
- (void)setSortDescriptors:(id)arg1;
- (void)setEntity:(id)arg1;
- (id)sortDescriptors;
- (void)setPredicate:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)stores;
- (void)_incrementInUseCounter;
- (void)_resolveEntityWithContext:(id)arg1;
- (void)setHavingPredicate:(id)arg1;
- (void)setGroupByProperties:(id)arg1;
- (id)groupByProperties;
- (void)setFetchOffset:(unsigned int)arg1;
- (void)setPropertiesToFetch:(id)arg1;
- (void)setRelationshipKeyPathsForPrefetching:(id)arg1;
- (void)setPropertiesToGroupBy:(id)arg1;
- (id)initWithEntityName:(id)arg1;
- (void)setAffectedStores:(id)arg1;
- (id)_newValidatedProperties:(id)arg1 groupBy:(BOOL)arg2 error:(id*)arg3;
- (id)affectedStores;
- (id)entityName;
- (void)setResultType:(unsigned int)arg1;
- (void)setShouldRefreshRefetchedObjects:(BOOL)arg1;
- (void)setReturnsObjectsAsFaults:(BOOL)arg1;
- (void)setIncludesPropertyValues:(BOOL)arg1;
- (void)setIncludesSubentities:(BOOL)arg1;
- (void)setReturnsDistinctResults:(BOOL)arg1;
- (BOOL)shouldRefreshRefetchedObjects;
- (BOOL)includesPendingChanges;
- (BOOL)returnsDistinctResults;
- (id)relationshipKeyPathsForPrefetching;
- (id)havingPredicate;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;
- (BOOL)_isEditable;
- (void)_throwIfNotEditable;
- (BOOL)hasChanges;
- (unsigned int)fetchOffset;
- (id)propertiesToFetch;
- (BOOL)returnsObjectsAsFaults;
- (id)propertiesToGroupBy;
- (unsigned int)requestType;
- (void)setIncludesPendingChanges:(BOOL)arg1;
- (void)setFetchLimit:(unsigned int)arg1;
- (void)setFetchBatchSize:(unsigned int)arg1;
- (unsigned int)fetchBatchSize;
- (unsigned int)fetchLimit;
- (BOOL)includesSubentities;
- (BOOL)includesPropertyValues;
- (id)predicate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)resultType;

@end
