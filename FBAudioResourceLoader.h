/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSFileManager;

@interface FBAudioResourceLoader : XXUnknownSuperclass {
	NSFileManager* _fileManager;
	NSURL* _fileURL;
	unsigned long _systemSoundID;
}
+(id)sharedLoader;
+(id)data;
+(unsigned)version;
+(id)name;
-(id)_fileURL:(id*)url;
-(id)_fileResourceURL;
-(void)playSound;
-(BOOL)loadSound:(id*)sound;
-(void)dealloc;
-(id)init;
@end
