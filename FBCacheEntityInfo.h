/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface FBCacheEntityInfo : XXUnknownSuperclass {
	NSString* _uuid;
	NSString* _key;
	double _accessTime;
	unsigned _fileSize;
	BOOL _dirty;
}
@property(assign, getter=isDirty) BOOL dirty;
@property(readonly, assign) unsigned fileSize;
@property(readonly, assign) double accessTime;
@property(readonly, copy) NSString* uuid;
@property(readonly, copy) NSString* key;
-(void)registerAccess;
-(void)dealloc;
-(id)initWithKey:(id)key uuid:(id)uuid accessTime:(double)time fileSize:(unsigned)size;
@end

