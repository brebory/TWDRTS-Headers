/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface HSSectionDb : XXUnknownSuperclass {
}
+(void)clearData;
+(id)getSectionIdForPublishId:(id)publishId;
+(id)getSection:(id)section;
+(id)getSectionIds;
+(id)getAllSections;
+(void)addEmptySectionForId:(id)anId;
+(void)storeSection:(id)section;
+(void)storeSections:(id)sections;
+(id)doesExist:(id)exist;
+(id)getStringFromColumnBlob:(const void*)columnBlob withSize:(int)size;
+(id)getColumns:(id)columns;
@end

