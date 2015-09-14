/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDataSource.h"

@class NSDictionary, NSMutableSet, UILocalizedIndexedCollation, NSArray, UIImage, NSString;
@protocol FBGraphObjectSelectionQueryDelegate, FBGraphObjectViewControllerDelegate, FBGraphObjectDataSourceDataNeededDelegate;

@interface FBGraphObjectTableDataSource : XXUnknownSuperclass <UITableViewDataSource> {
	BOOL _useCollation;
	BOOL _itemTitleSuffixEnabled;
	BOOL _itemPicturesEnabled;
	BOOL _itemSubtitleEnabled;
	BOOL _expectingMoreGraphObjects;
	BOOL _showSections;
	UIImage* _defaultPicture;
	id<FBGraphObjectViewControllerDelegate> _controllerDelegate;
	NSString* _groupByField;
	id<FBGraphObjectSelectionQueryDelegate> _selectionDelegate;
	id<FBGraphObjectDataSourceDataNeededDelegate> _dataNeededDelegate;
	NSArray* _sortDescriptors;
	NSArray* _data;
	NSArray* _indexKeys;
	NSDictionary* _indexMap;
	NSMutableSet* _pendingURLConnections;
	UILocalizedIndexedCollation* _collation;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL showSections;
@property(retain, nonatomic) UILocalizedIndexedCollation* collation;
@property(assign, nonatomic) BOOL expectingMoreGraphObjects;
@property(retain, nonatomic) NSMutableSet* pendingURLConnections;
@property(retain, nonatomic) NSDictionary* indexMap;
@property(retain, nonatomic) NSArray* indexKeys;
@property(retain, nonatomic) NSArray* data;
@property(copy, nonatomic) NSArray* sortDescriptors;
@property(assign, nonatomic) id<FBGraphObjectDataSourceDataNeededDelegate> dataNeededDelegate;
@property(assign, nonatomic) id<FBGraphObjectSelectionQueryDelegate> selectionDelegate;
@property(assign, nonatomic) BOOL itemSubtitleEnabled;
@property(assign, nonatomic) BOOL itemPicturesEnabled;
@property(assign, nonatomic) BOOL itemTitleSuffixEnabled;
@property(assign, nonatomic) BOOL useCollation;
@property(copy, nonatomic) NSString* groupByField;
@property(assign, nonatomic) id<FBGraphObjectViewControllerDelegate> controllerDelegate;
@property(retain, nonatomic) UIImage* defaultPicture;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(id)sectionIndexTitlesForTableView:(id)tableView;
-(int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)addOrRemovePendingConnection:(id)connection;
-(id)tableView:(id)view imageForItem:(id)item;
-(id)sectionItemsForSection:(int)section;
-(id)titleForSection:(int)section;
-(BOOL)isActivityIndicatorIndexPath:(id)path;
-(BOOL)isLastSection:(int)section;
-(id)indexPathForItem:(id)item;
-(id)itemAtIndexPath:(id)indexPath;
-(id)indexKeyOfItem:(id)item;
-(id)cellWithTableView:(id)tableView;
-(void)setSortingBySingleField:(id)field ascending:(BOOL)ascending;
-(void)setSortingByFields:(id)fields ascending:(BOOL)ascending;
-(BOOL)filterIncludesItem:(id)item;
-(void)update;
-(void)cancelPendingRequests;
-(void)bindTableView:(id)view;
-(BOOL)hasGraphObjects;
-(void)appendGraphObjects:(id)objects;
-(void)clearGraphObjects;
-(void)prepareForNewRequest;
-(id)fieldsForRequestIncluding:(id)requestIncluding;
-(void)dealloc;
-(id)init;
@end

