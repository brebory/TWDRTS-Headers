/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface HSReportIssueCalls : XXUnknownSuperclass {
}
+(id)sharedInstance;
-(BOOL)updateUAToken:(id)token;
-(void)handleResponseForReportIssue:(id)reportIssue;
-(BOOL)sendNewIssueWithDescription:(id)description;
-(void)fetchProfileID;
-(BOOL)createProfile;
-(void)swapDeviceID;
-(id)init;
@end
