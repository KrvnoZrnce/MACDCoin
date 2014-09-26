/****************************************************************************
** Meta object code from reading C++ file 'macdmarketdata.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/macdmarketdata.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'macdmarketdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MacdMarketData[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x08,
      51,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MacdMarketData[] = {
    "MacdMarketData\0\0reply\0"
    "finishedSlot(QNetworkReply*)\0getOverview()\0"
};

void MacdMarketData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MacdMarketData *_t = static_cast<MacdMarketData *>(_o);
        switch (_id) {
        case 0: _t->finishedSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: _t->getOverview(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MacdMarketData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MacdMarketData::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MacdMarketData,
      qt_meta_data_MacdMarketData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MacdMarketData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MacdMarketData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MacdMarketData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MacdMarketData))
        return static_cast<void*>(const_cast< MacdMarketData*>(this));
    return QWidget::qt_metacast(_clname);
}

int MacdMarketData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
