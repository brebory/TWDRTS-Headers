/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WBService.h"


__attribute__((visibility("hidden")))
@interface WBAnalyticService : WBService {
}
+(void)applicationWillEnterForeground:(id)application;
+(void)applicationDidEnterBackground:(id)application;
+(void)clearEvents;
+(void)flush;
+(id)deviceToken;
+(id)deviceInfo;
+(void)setDeviceInfo:(id)info;
+(void)assignABTest:(id)test variant:(id)variant parameters:(id)parameters;
+(void)assignABTest:(id)test variant:(id)variant;
+(void)clearDeviceProperties;
+(void)unregisterDeviceProperty:(id)property;
+(void)registerDeviceProperty:(id)property value:(id)value;
+(void)trackEvent:(id)event type:(int)type parameters:(id)parameters priority:(int)priority;
+(void)trackEvent:(id)event type:(int)type parameters:(id)parameters;
+(BOOL)isSerializeableParameter:(id)parameter;
+(void)initializeWithApplicationKey:(id)applicationKey settings:(id)settings;
+(void)initializeWithApplicationKey:(id)applicationKey;
+(void)_registerObservers;
+(void)_airshipChannelChanged:(id)changed;
+(void)_trackInstall:(id)install;
+(void)_registerNotifications;
+(void)initialize;
+(void)trackAdController:(int)controller failureReason:(id)reason adNetwork:(id)network adType:(int)type extraParams:(id)params;
+(void)trackAd:(int)ad isBackFill:(BOOL)fill failureReason:(id)reason adNetwork:(id)network adType:(int)type extraParams:(id)params;
+(void)trackSocialConnect:(id)connect userId:(id)anId firstName:(id)name lastName:(id)name4 gender:(unsigned)gender birthDate:(id)date email:(id)email extraParams:(id)params;
+(void)trackSocialConnect:(id)connect userId:(id)anId firstName:(id)name lastName:(id)name4 gender:(unsigned)gender birthYear:(id)year birthMonth:(id)month birthDay:(id)day email:(id)email extraParams:(id)params;
+(void)trackAirshipRegister:(id)aRegister extraParams:(id)params;
+(void)trackAchievement:(id)achievement title:(id)title system:(id)system extraParams:(id)params;
+(void)trackAchievement:(id)achievement title:(id)title extraParams:(id)params;
+(void)trackPromo:(id)promo type:(id)type promoId:(id)anId extraParams:(id)params;
+(void)trackViral:(id)viral extraParams:(id)params;
+(void)trackPaymentCent:(BOOL)cent error:(id)error amountLocal:(id)local amountUS:(id)us localCurrencyName:(id)name special:(id)special specialId:(id)anId storeSku:(id)sku gameSku:(id)sku9 paymentId:(id)anId10 extraParams:(id)params;
+(void)trackPaymentCent:(BOOL)cent error:(id)error amountLocal:(id)local amountUS:(id)us localCurrencyName:(id)name special:(id)special specialId:(id)anId storeSku:(id)sku gameSku:(id)sku9 extraParams:(id)params;
+(void)trackPayment:(BOOL)payment error:(id)error amountLocal:(id)local amountUS:(id)us localCurrencyName:(id)name special:(id)special specialId:(id)anId storeSku:(id)sku gameSku:(id)sku9 paymentId:(id)anId10 extraParams:(id)params;
+(void)trackPayment:(BOOL)payment error:(id)error amountLocal:(id)local amountUS:(id)us localCurrencyName:(id)name special:(id)special specialId:(id)anId storeSku:(id)sku gameSku:(id)sku9 extraParams:(id)params;
+(void)trackRegistration:(id)registration registrationType:(id)type error:(id)error isNew:(id)aNew extraParams:(id)params;
+(void)trackLevelUp:(id)up newLevel:(id)level extraParams:(id)params;
+(void)trackGameTransaction:(id)transaction quantity:(id)quantity itemBalance:(id)balance transactionType:(id)type context:(id)context transactionId:(id)anId extraParams:(id)params;
+(void)trackGameTransaction:(id)transaction quantity:(id)quantity itemBalance:(id)balance transactionType:(id)type context:(id)context extraParams:(id)params;
+(void)trackGameTransactions:(id)transactions quantities:(id)quantities itemBalances:(id)balances transactionType:(id)type context:(id)context transactionId:(id)anId extraParams:(id)params;
+(void)trackGameTransactions:(id)transactions quantities:(id)quantities itemBalances:(id)balances transactionType:(id)type context:(id)context extraParams:(id)params;
+(void)trackFteFlow:(int)flow isComplete:(BOOL)complete skip:(BOOL)skip duration:(int)duration extraParams:(id)params;
+(void)trackAppOpenWithLevel:(id)level extraParameters:(id)parameters;
@end

